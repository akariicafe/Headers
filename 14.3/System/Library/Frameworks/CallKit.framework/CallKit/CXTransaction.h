@class NSUUID, NSArray, NSMutableOrderedSet, NSString;

@interface CXTransaction : NSObject <CXCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSMutableOrderedSet *mutableActions;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAction:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;
- (id)allowedClassesForMutableActions;
- (void)addActionsFromTransaction:(id)a0;

@end
