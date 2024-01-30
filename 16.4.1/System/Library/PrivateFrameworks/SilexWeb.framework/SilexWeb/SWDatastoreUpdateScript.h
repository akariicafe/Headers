@class NSString, WKUserScript, SWDatastore;
@protocol SWSession;

@interface SWDatastoreUpdateScript : NSObject <SWScript>

@property (readonly, nonatomic) SWDatastore *datastore;
@property (readonly, nonatomic) SWDatastore *oldDatastore;
@property (readonly, nonatomic) id<SWSession> originatingSession;
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
- (id)initWithDatastore:(id)a0 oldDatastore:(id)a1 originatingSession:(id)a2;

@end
