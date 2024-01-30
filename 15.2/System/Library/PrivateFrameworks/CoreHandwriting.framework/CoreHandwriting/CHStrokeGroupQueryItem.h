@class NSArray, NSDictionary, NSLocale, NSNumber;

@interface CHStrokeGroupQueryItem : NSObject

@property (readonly, copy, nonatomic) NSDictionary *_tokenizedTextResultsByLocale;
@property (readonly, copy, nonatomic) NSDictionary *_errorsByLocale;
@property (readonly, nonatomic) NSNumber *strokeGroupIdentifier;
@property (readonly, nonatomic) NSNumber *strokeGroupStableIdentifier;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, nonatomic) long long strokeGroupType;
@property (readonly, copy, nonatomic) NSLocale *preferredLocale;

+ (id)descriptionForStrokeGroupQueryItemType:(long long)a0;

- (id)description;
- (void)dealloc;
- (id)initWithStrokeGroupIdentifier:(id)a0 stableIdentifier:(id)a1 strokeIdentifiers:(id)a2 type:(long long)a3 preferredLocale:(id)a4 tokenizedTextResultsByLocale:(id)a5 errorsByLocale:(id)a6;
- (id)textRecognitionResultForLocale:(id)a0 error:(id *)a1;

@end
