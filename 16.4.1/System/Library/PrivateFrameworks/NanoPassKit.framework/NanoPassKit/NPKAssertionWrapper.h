@class NSUUID;
@protocol NSObject;

@interface NPKAssertionWrapper : NSObject {
    id /* block */ _assertionInvalidator;
}

@property (readonly, nonatomic) id<NSObject> assertion;
@property (readonly) NSUUID *wrapperUUID;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAssertion:(id)a0 invalidator:(id /* block */)a1;
- (BOOL)invalidateAssertionExpected:(BOOL)a0;

@end
