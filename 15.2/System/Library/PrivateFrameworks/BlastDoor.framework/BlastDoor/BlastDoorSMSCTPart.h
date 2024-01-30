@class NSString, BlastDoorSMSCTPartContentWrapper;

@interface BlastDoorSMSCTPart : NSObject {
    void /* unknown type, empty encoding */ sMSCTPart;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *contentId;
@property (nonatomic, readonly) NSString *contentLocation;
@property (nonatomic, readonly) BlastDoorSMSCTPartContentWrapper *content;

- (void).cxx_destruct;
- (id)init;

@end
