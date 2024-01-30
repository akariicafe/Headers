@class NSNumber, NSMutableDictionary;

@interface CLSAuthTree : NSObject <NSSecureCoding> {
    NSMutableDictionary *_graph;
    NSNumber *_overridingStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_addNode:(id)a0 parentStatusID:(id)a1;
- (id)initWithOverridingStatus:(long long)a0;
- (id)initWithStatus:(long long)a0 statusID:(id)a1 identifier:(id)a2;
- (void)setAuthStatus:(long long)a0 forIdentifier:(id)a1 statusID:(id)a2 parentStatusID:(id)a3;
- (long long)authStatusAtIdentifierPath:(id)a0;

@end
