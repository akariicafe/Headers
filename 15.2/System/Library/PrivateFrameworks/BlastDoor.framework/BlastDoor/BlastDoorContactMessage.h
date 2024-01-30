@class NSString, BlastDoorContactMessage_ContactInfo;

@interface BlastDoorContactMessage : NSObject {
    void /* unknown type, empty encoding */ contactMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorContactMessage_ContactInfo *contactInfo;

- (void).cxx_destruct;
- (id)init;

@end
