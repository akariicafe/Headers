@class NSString, NSNumber, NSArray;

@interface GDKnosisFact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *factId;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, copy, nonatomic) NSString *subjectId;
@property (readonly, copy, nonatomic) NSArray *subjectAlias;
@property (readonly, copy, nonatomic) NSNumber *subjectPopularity;
@property (readonly, copy, nonatomic) NSArray *subjectIsa;
@property (readonly, copy, nonatomic) NSString *predicateId;
@property (readonly, copy, nonatomic) NSArray *predicateAlias;
@property (readonly, copy, nonatomic) NSNumber *predicatePopularity;
@property (readonly, copy, nonatomic) NSString *objectID;
@property (readonly, copy, nonatomic) NSArray *objectAlias;
@property (readonly, copy, nonatomic) NSNumber *objectPopularity;
@property (readonly, copy, nonatomic) NSArray *qualifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFactId:(id)a0 score:(id)a1 subjectId:(id)a2 subjectAlias:(id)a3 subjectPopularity:(id)a4 subjectIsa:(id)a5 predicateId:(id)a6 predicateAlias:(id)a7 predicatePopularity:(id)a8 objectID:(id)a9 objectAlias:(id)a10 objectPopularity:(id)a11 qualifiers:(id)a12;

@end
