@interface SNKShotFeaturizer : NSObject

+ (id)resizeSegment:(id)a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
+ (id)collectResultsForRequest:(id)a0 fromSegment:(id)a1 error:(id *)a2;
+ (id)collectFeaturePrintsOfType:(long long)a0 fromSegment:(id)a1 withWindowDuration:(id)a2 withOverlapFactor:(id)a3 error:(id *)a4;
+ (id)getFirstFeaturePrintOfType:(long long)a0 fromSegment:(id)a1 withWindowDuration:(id)a2 withOverlapFactor:(id)a3 error:(id *)a4;
+ (id)shiftSegment:(id)a0 byAmount:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
+ (id)clipSegmentToFileBoundaries:(id)a0 error:(id *)a1;
+ (id)hallucinateNewEmbeddingSimilarToSoundPrintEmbedding:(id)a0 withHallucinator:(id)a1 withHallucinationTokenGroup:(unsigned long long)a2 error:(id *)a3;
+ (id)generateNegativeEmbeddingFromPositiveSoundPrintEmbedding:(id)a0 usingNegativeSoundPrintEmbeddingArray:(id)a1 randomNumberGenerator:(id /* block */)a2 error:(id *)a3;
+ (id /* block */)defaultRandomNumberGenerator;
+ (id)featurizeFiles:(id)a0 randomNumberGenerator:(id /* block */)a1 hallucinatorModelURL:(id)a2 cancellable:(id)a3 error:(id *)a4;
+ (id)ensureMinimumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forSegment:(id)a1 error:(id *)a2;
+ (BOOL)ensureIsValidHallucinatorV3Model:(id)a0 error:(id *)a1;
+ (id)generateDatasetUsingNewHallucinator:(id)a0 segments:(id)a1 exemplarLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 datasetIdentifier:(id)a3 randomNumberGenerator:(id /* block */)a4 error:(id *)a5;
+ (BOOL)collectEmbeddingsAtOneTimeShift:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forSegment:(id)a1 numHallucinatedExamples:(unsigned long long)a2 exemplarDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 hallucinator:(id)a4 negativeEmbeddingArray:(id)a5 resultHandler:(id /* block */)a6 randomNumberGenerator:(id /* block */)a7 error:(id *)a8;
+ (id)performSegmentationRequest:(id)a0 error:(id *)a1;
+ (int)recognizeHallucinatorModel:(id)a0 error:(id *)a1;
+ (id)generateDatasetFrom:(id)a0 numTimeShifts:(int)a1 extendeExemplartLength:(int)a2 secondsAugmentAroundSegment:(int)a3 sampleRate:(int)a4 hallucinator:(id)a5 numHallucinatedExamples:(int)a6 datasetIdentifier:(id)a7 randomNumberGenerator:(id /* block */)a8 cancellable:(id)a9 error:(id *)a10;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })generateRandomTimeOffsetInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 randomNumberGenerator:(id /* block */)a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })generateRandomTimeInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 randomNumberGenerator:(id /* block */)a1;
+ (id)resizeOneSegment:(id)a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (BOOL)emitTimeShiftsForSegment:(id)a0 shiftWindow:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 randomNumberGenerator:(id /* block */)a2 count:(unsigned long long)a3 datasetIdentifier:(id)a4 foregroundAudioLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 handler:(id /* block */)a6 error:(id *)a7;
+ (id)readNumRepetitionsPerTimeShiftFromHallucinator:(id)a0 error:(id *)a1;
+ (id)readNumTimeShiftsPerSegmentFromHallucinator:(id)a0 error:(id *)a1;
+ (BOOL)ensureIsValidHallucinatorV1Model:(id)a0 error:(id *)a1;
+ (id)packageHallucinatorInputFeaturesForegroundAudio:(id)a0 backgroundAudio:(id)a1 repetitionCounter:(id)a2 datasetIdentifier:(id)a3 shiftAmount:(id)a4 originalSegmentLength:(id)a5 state:(id)a6 error:(id *)a7;
+ (BOOL)unpackageHallucinatorOutputs:(id)a0 handler:(id /* block */)a1 error:(id *)a2;
+ (BOOL)findBackgroundRegionsSurroundingForegroundSegment:(id)a0 handler:(id /* block */)a1 error:(id *)a2;
+ (BOOL)selectBackgroundNoiseRegionsSurroundingSegment:(id)a0 eligibleTimeSpanPrecedingSegment:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 eligibleTimeSpanFollowingSegment:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 handler:(id /* block */)a3 error:(id *)a4;
+ (BOOL)findBackgroundRegionsSurroundingForegroundSegments:(id)a0 handler:(id /* block */)a1 error:(id *)a2;
+ (id)resampleOneSegment:(id)a0 toSampleRate:(int)a1;
+ (BOOL)applyHallucinator:(id)a0 foregroundAudio:(id)a1 backgroundAudio:(id)a2 repetitionCounter:(id)a3 datasetIdentifier:(id)a4 shiftAmount:(id)a5 originalSegmentLength:(id)a6 state:(id)a7 handler:(id /* block */)a8 error:(id *)a9;
+ (BOOL)hallucinateOneTimeShiftedSegment:(id)a0 hallucinator:(id)a1 hallucinatorStateFetcher:(id /* block */)a2 backgroundAudio:(id)a3 datasetIdentifier:(id)a4 shiftAmount:(id)a5 originalSegmentLength:(id)a6 numRepetitionsPerTimeShift:(unsigned long long)a7 handler:(id /* block */)a8 error:(id *)a9;
+ (id)resampleSegments:(id)a0 toSampleRate:(int)a1;
+ (id)extractBackgroundNoiseMatchingLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromSegments:(id)a1 error:(id *)a2;
+ (id /* block */)generateHallucinateFunctionWithHallucinator:(id)a0 backgroundAudio:(id)a1 numRepetitionsPerTimeShift:(unsigned long long)a2 handler:(id /* block */)a3 error:(id *)a4;
+ (BOOL)emitTimeShiftsForManySegments:(id)a0 shiftWindow:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 randomNumberGenerator:(id /* block */)a2 numTimeShiftsPerSegment:(unsigned long long)a3 datasetIdentifier:(id)a4 foregroundAudioLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 handler:(id /* block */)a6 error:(id *)a7;
+ (id /* block */)pseudoRandomNumberGeneratorWithSeed:(unsigned int)a0;
+ (id)featurizeFiles:(id)a0 hallucinatorModelURL:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)featurizeFiles:(id)a0 randomNumberGenerator:(id /* block */)a1 hallucinatorModelURL:(id)a2 error:(id *)a3;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })randomlyShiftTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 byAmountWithinWindow:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 randomNumberGenerator:(id /* block */)a2;
+ (id)resizeSegments:(id)a0 toDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
