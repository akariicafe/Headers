@class NSString, NSNumber, EDAMSavedSearchScope;

@interface EDAMSavedSearch : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSNumber *format;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) EDAMSavedSearchScope *scope;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
