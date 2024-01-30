@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, nonatomic) id<CoreDAVACLTaskDelegate> delegate;

- (void).cxx_destruct;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)description;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithAccessControlEntities:(id)a0 atURL:(id)a1;

@end
