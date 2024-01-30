@class NSString, NSArray;

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable>

@property (copy, nonatomic) NSString *userActivityTitle;
@property (copy, nonatomic) NSArray *contentRects;
@property (nonatomic) BOOL canGenerateDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;

@end
