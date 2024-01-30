@class NSString, NSNumber;

@interface EDAMBusinessNotebook : FATObject

@property (retain, nonatomic) NSString *notebookDescription;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *recommended;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
