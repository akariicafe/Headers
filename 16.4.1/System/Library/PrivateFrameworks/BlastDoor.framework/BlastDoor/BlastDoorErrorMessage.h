@class NSString, BlastDoorMetadata;

@interface BlastDoorErrorMessage : NSObject {
    void /* unknown type, empty encoding */ errorMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) NSString *additionalInfo;

- (id)init;
- (void).cxx_destruct;

@end
