@class NSString;

@interface BlastDoorContactMessage_ContactInfo : NSObject {
    void /* unknown type, empty encoding */ contactMessage_ContactInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *organizationNameTitle;
@property (nonatomic, readonly) NSString *contactFormatterTitle;
@property (nonatomic, readonly) NSString *contactNameTitle;
@property (nonatomic, readonly) NSString *organizationNameSubtitle;
@property (nonatomic, readonly) NSString *contactNameSubtitle;

- (id)init;
- (void).cxx_destruct;

@end
