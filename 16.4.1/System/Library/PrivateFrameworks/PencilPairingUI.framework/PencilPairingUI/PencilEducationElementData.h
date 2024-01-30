@class NSString;

@interface PencilEducationElementData : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *textContent;
@property (retain, nonatomic) NSString *placeholderTextContent;
@property (retain, nonatomic) NSString *languageID;
@property (nonatomic) long long type;

+ (id)elementDataForType:(long long)a0 languageID:(id)a1;
+ (id)prefixForElementType:(long long)a0;

- (void).cxx_destruct;

@end
