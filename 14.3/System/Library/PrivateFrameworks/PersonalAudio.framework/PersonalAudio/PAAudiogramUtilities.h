@interface PAAudiogramUtilities : NSObject

+ (id)presetFrequencies;
+ (id)ptaFrequencies;
+ (struct { unsigned int x0; unsigned int x1; })entryFromData:(id)a0 atIndex:(unsigned int)a1;
+ (id)normalizedOffsetsFromAudiogram:(id)a0;

@end
