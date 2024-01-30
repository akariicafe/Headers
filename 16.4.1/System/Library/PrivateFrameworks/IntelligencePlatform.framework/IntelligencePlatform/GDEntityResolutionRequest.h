@class NSString, GDMetaContext, NSArray;

@interface GDEntityResolutionRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) GDMetaContext *metaContext;
@property (readonly, copy, nonatomic) NSArray *entityTypeFilter;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSArray *span;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 mode:(long long)a1 metaContext:(id)a2 entityTypeFilter:(id)a3 requestID:(id)a4 span:(id)a5;

@end
