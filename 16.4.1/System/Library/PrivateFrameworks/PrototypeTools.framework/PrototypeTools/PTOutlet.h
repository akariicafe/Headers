@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {
    unsigned long long _nextToken;
    NSMutableDictionary *_actionsByToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)_invokeActions;
- (id)addAction:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)removeActionForToken:(id)a0;
- (void).cxx_destruct;

@end
