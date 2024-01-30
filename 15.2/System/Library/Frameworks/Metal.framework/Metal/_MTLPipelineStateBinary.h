@class NSData;

@interface _MTLPipelineStateBinary : NSObject <MTLPipelineStateBinary>

@property (readonly, retain) NSData *binary;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (id)initWithBinary:(id)a0 uniqueIdentifier:(unsigned long long)a1;

@end
