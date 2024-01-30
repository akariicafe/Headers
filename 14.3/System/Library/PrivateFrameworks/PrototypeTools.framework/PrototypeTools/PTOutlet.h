@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)addAction:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void)_invokeActions;
- (void)removeActionForToken:(id)a0;

@end
