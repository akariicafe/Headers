@class NSURL;

@interface PARAsyncCard : SFCard <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double scale;
@property (readonly, copy, nonatomic) NSURL *cardURL;
@property (readonly, nonatomic) unsigned long long clientQueryId;

+ (id)cardWithTitle:(id)a0 url:(id)a1 session:(id)a2 scale:(double)a3 queryId:(unsigned long long)a4;
+ (id)cardWithTitle:(id)a0 url:(id)a1 session:(id)a2 scale:(double)a3 queryId:(unsigned long long)a4 clientQueryId:(unsigned long long)a5;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
