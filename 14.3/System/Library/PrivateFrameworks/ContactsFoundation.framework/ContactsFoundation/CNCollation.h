@class NSArray, NSString;

@interface CNCollation : NSObject

@property (readonly) NSArray *headerLanguages;
@property (readonly) NSArray *indexSections;
@property (readonly) NSString *searchTransform;
@property (readonly) NSString *nameTransform;
@property (readonly) NSString *searchCollatorIdentifier;
@property (readonly) NSString *sortCollatorIdentifier;
@property (readonly) BOOL indexExtraTokenizations;

+ (id)sectionURL;
+ (id)indexSectionsFromPropertyList:(id)a0;
+ (id)languageHeaderSectionsFromPropertyList:(id)a0 collator:(struct UCollator { } *)a1;
+ (id)defaultSortCollatorIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCollator:(struct UCollator { } *)a0 URL:(id)a1;
- (id)initWithCollator:(struct UCollator { } *)a0;

@end
