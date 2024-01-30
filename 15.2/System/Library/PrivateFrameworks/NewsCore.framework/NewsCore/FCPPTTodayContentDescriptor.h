@class NSString;

@interface FCPPTTodayContentDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) NSString *tagID;
@property (readonly, nonatomic) NSString *forYouConfigID;

+ (id)descriptorWithTagID:(id)a0;
+ (id)descriptorWithForYouConfigID:(id)a0 tagID:(id)a1;
+ (id)descriptorWithForYouConfigID:(id)a0;

- (id)_initWithTagID:(id)a0;
- (id)_initWithForYouConfigID:(id)a0 tagID:(id)a1;
- (void).cxx_destruct;

@end
