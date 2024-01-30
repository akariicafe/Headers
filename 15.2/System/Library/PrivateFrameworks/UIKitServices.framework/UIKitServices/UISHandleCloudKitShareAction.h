@class CKShareMetadata;

@interface UISHandleCloudKitShareAction : BSAction {
    CKShareMetadata *_cachedMetadata;
}

@property (readonly, nonatomic) CKShareMetadata *shareMetadata;

+ (id)cloudKitShareActionWithShareMetadata:(id)a0;
+ (void)loadCloudKitFramework;

- (BOOL)isKindOfClass:(Class)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)UIActionType;
- (id)initWithShareMetadata:(id)a0;
- (id)data;

@end
