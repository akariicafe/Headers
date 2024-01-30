@class NSString;

@interface ACCMediaLibraryUpdateLibraryInfo : NSObject

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;

- (id)initWithDict:(id)a0;
- (BOOL)supportsSecureCoding;
- (id)description;
- (void).cxx_destruct;
- (id)copyDict;
- (id)initWithMediaLibrary:(id)a0 name:(id)a1 type:(int)a2;
- (void)fillStruct:(struct { char *x0; char *x1; int x2; } *)a0;
- (id)initWithMediaLibrary:(id)a0 dict:(id)a1;

@end
