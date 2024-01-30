@class NUResolvedSource, NUSource;

@interface PLEditSource : NSObject

@property (readonly, nonatomic) NUResolvedSource *resolvedSource;
@property (readonly, retain, nonatomic) NUSource *source;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) BOOL isRAWSource;

- (id)initWithResolvedSource:(id)a0 mediaType:(long long)a1;
- (void)setResolvedSource:(id)a0 mediaType:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;

@end
