@class NSUUID, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLineNonStyleItem : NSObject

@property (retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle;
@property (readonly, nonatomic) NSUUID *uuid;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithNonStyle:(id)a0 uuid:(id)a1;
- (id)initFromUnarchiver:(id)a0 message:(const void *)a1;
- (void)saveToArchiver:(id)a0 message:(void *)a1;

@end
