@class NSUUID, NSString, NSArray;

@interface APContentDepiction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property unsigned long long placement;
@property unsigned long long adjacency;
@property (retain) NSString *language;
@property (retain) NSString *locale;
@property (retain) NSArray *searchTerms;
@property (retain) NSArray *keywords;
@property (retain) NSArray *categories;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)init:(unsigned long long)a0 adjacency:(unsigned long long)a1 language:(id)a2 locale:(id)a3 searchTerm:(id)a4 keywords:(id)a5 categories:(id)a6;

@end
