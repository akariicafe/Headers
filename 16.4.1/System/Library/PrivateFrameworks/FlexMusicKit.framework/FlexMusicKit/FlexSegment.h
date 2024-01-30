@class NSString, NSArray, NSDictionary;

@interface FlexSegment : NSObject <NSCopying, NSDictionaryCoding>

@property (readonly, copy, nonatomic) NSString *namePrefix;
@property (readonly, copy, nonatomic) NSString *nameStem;
@property (readonly, copy, nonatomic) NSString *nameIndex;
@property (readonly, copy, nonatomic) NSString *nameSuffix;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long priority;
@property (nonatomic) long long bars;
@property (nonatomic) long long beatsPerBar;
@property (nonatomic) long long samplesPerBar;
@property (retain, nonatomic) NSArray *customBarMarkers;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long sampleCount;
@property (nonatomic) BOOL sliceable;
@property (retain, nonatomic) NSDictionary *transitions;
@property (retain, nonatomic) NSDictionary *markers;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long errors;
@property (readonly, nonatomic) NSDictionary *metadataValues;

+ (BOOL)canTransitionFromSegment:(id)a0 toSegment:(id)a1 fromBarIndex:(long long)a2 checkIfPrevented:(BOOL)a3;
+ (long long)crossfadeLengthInSamplesForFromSeg:(id)a0 toSeg:(id)a1 fadeOutTimeInMsec:(long long)a2 fadeInTimeInMsec:(long long)a3 validFadeOutSamples:(long long *)a4 validFadeInSamples:(long long *)a5;
+ (id)longLabelForSegmentType:(unsigned long long)a0;
+ (id)readInfoFromAudioFileAtPath:(id)a0;
+ (long long)samplesForTimeInMsec:(long long)a0 atSampleRate:(long long)a1;
+ (id)segmentWithName:(id)a0 inSegments:(id)a1;
+ (id)segmentsWithType:(unsigned long long)a0 inSegments:(id)a1;
+ (id)segmentsWithType:(unsigned long long)a0 nameIndex:(id)a1 nameSuffix:(id)a2 inSegments:(id)a3;
+ (id)shortLabelForSegmentType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileAtPath:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)metadataValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)encodeAsDictionary;
- (void)addMetadataValue:(id)a0 forKey:(id)a1;
- (BOOL)isPriorityValid;
- (void)_decodeTypeInfoFromSegmentName;
- (void)addOrReplaceTransition:(id)a0 toSegmentNamed:(id)a1 fromBarIndex:(long long)a2;
- (long long)barDurationForBarIndex:(long long)a0;
- (long long)barEndPositionForBarIndex:(long long)a0;
- (long long)barStartPositionForBarIndex:(long long)a0;
- (id)initAsCrossFade:(id)a0 sampleRate:(long long)a1 sampleCount:(long long)a2 beatsPerBar:(long long)a3;
- (BOOL)linkedPerBarTransitionsToSegmentNamed:(id)a0;
- (BOOL)relinkAllTransitions;
- (void)removeTransitionToSegmentNamed:(id)a0 fromBarIndex:(long long)a1;
- (void)setLinkedPerBarTransitions:(BOOL)a0 toSegmentNamed:(id)a1;
- (id)transitionToSegmentNamed:(id)a0 fromBarIndex:(long long)a1;

@end
