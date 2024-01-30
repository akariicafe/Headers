@class MPModelKind, NSString, MPPropertySet;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding> {
    struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope *__ptr_; struct __shared_weak_count *__cntrl_; } _coreScope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct shared_ptr<mlcore::LocalizedSearchScope> { struct LocalizedSearchScope *x0; struct __shared_weak_count *x1; } coreScope;
@property (retain, nonatomic) MPModelKind *itemKind;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) MPPropertySet *itemProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemKind:(id)a0 name:(id)a1 properties:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
