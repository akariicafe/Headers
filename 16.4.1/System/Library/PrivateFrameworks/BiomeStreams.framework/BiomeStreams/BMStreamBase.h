@class NSString, BMStoreStream, BMStreamConfiguration, BMSQLSchema;

@interface BMStreamBase : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BMStoreStream *storeStream;
@property (readonly, nonatomic) BMStreamConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMSQLSchema *schema;

- (id)publisher;
- (id)pruner;
- (id)initWithIdentifier:(id)a0 schema:(id)a1 configuration:(id)a2;
- (id)DSLPublisher;
- (BOOL)isEqual:(id)a0;
- (id)publisherWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)source;

@end
