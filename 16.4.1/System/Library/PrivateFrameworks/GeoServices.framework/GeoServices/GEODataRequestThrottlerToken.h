@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding> {
    double _createdAt;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _kind;
    NSString *_bundleId;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)refresh;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCCoder:(id)a0;
- (BOOL)isValidForRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 client:(id)a1;
- (id)initWithRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 forClient:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
