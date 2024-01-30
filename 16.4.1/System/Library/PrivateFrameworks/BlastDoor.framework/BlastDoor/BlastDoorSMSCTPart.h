@class NSString, BlastDoorSMSCTPartContentWrapper;

@interface BlastDoorSMSCTPart : NSObject {
    void /* unknown type, empty encoding */ sMSCTPart;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *contentId;
@property (nonatomic, readonly) NSString *contentLocation;
@property (nonatomic, readonly) BlastDoorSMSCTPartContentWrapper *content;

- (id)init;
- (void).cxx_destruct;

@end
