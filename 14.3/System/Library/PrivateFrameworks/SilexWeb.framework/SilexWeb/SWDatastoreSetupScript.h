@class NSString, WKUserScript, SWDatastore;

@interface SWDatastoreSetupScript : NSObject <SWScript>

@property (readonly, nonatomic) SWDatastore *datastore;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WKUserScript *userScript;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)source;

- (void).cxx_destruct;
- (id)initWithDatastore:(id)a0;

@end
