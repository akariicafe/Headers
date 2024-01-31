@class NSString;

@interface BGHealthResearchTaskRequest : BGProcessingTaskRequest

@property NSString *protectionTypeOfRequiredData;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_activity;

@end
