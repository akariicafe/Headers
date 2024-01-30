@class NSSet, NSMutableSet;

@interface VCSessionMediaTypeSettings : VCObject <NSSecureCoding> {
    NSMutableSet *_streamGroupIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int mediaState;
@property (nonatomic) unsigned int remoteMediaState;
@property (readonly, nonatomic) NSSet *streamGroupIDs;

+ (id)serializationClasses;
+ (id)settingsWithMediaType:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithMediaType:(unsigned int)a0;
- (id)description;
- (void)addStreamGroupID:(unsigned int)a0;

@end
