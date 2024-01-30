@class NSString, NSArray, NSURL, NSData;

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable>

@property (copy, nonatomic) NSString *userActivityTitle;
@property (copy, nonatomic) NSURL *userActivityURL;
@property (copy, nonatomic) NSArray *contentRects;
@property (nonatomic) BOOL canGenerateDocument;
@property (copy, nonatomic) NSData *jsonEncodedStringsInformation;
@property (nonatomic) int interfaceOrientation;
@property (copy, nonatomic) NSString *appLanguage;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;

@end
