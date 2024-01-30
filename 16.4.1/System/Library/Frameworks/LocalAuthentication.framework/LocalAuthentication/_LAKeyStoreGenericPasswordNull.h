@class NSString;

@interface _LAKeyStoreGenericPasswordNull : NSObject <LAKeyStoreGenericPassword> {
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchDataWithContext:(id)a0 completion:(id /* block */)a1;

@end
