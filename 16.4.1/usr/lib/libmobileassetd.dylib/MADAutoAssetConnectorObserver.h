@class NSURL, NWPathEvaluator;

@interface MADAutoAssetConnectorObserver : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSURL *pathToServer;
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)description;
- (void).cxx_destruct;
- (id)initForServerPath:(id)a0;

@end
