@class NSString, NSDictionary, NSData, NSArray, SFCommandButtonItem;

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults;
@property (nonatomic) BOOL isInitiallyHidden;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *moreText;
@property (copy, nonatomic) SFCommandButtonItem *button;
@property (nonatomic) double rankingScore;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)compareWithSection:(id)a0 logger:(id /* block */)a1;

@end
