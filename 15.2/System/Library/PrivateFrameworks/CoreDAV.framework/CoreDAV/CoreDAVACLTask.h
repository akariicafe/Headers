@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, nonatomic) id<CoreDAVACLTaskDelegate> delegate;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccessControlEntities:(id)a0 atURL:(id)a1;

@end
