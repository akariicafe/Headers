@class NSString, CPImageSet, NSArray;

@interface CPContactEntity : CPEntity <CPContactProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) CPImageSet *imageSet;
@property (copy, nonatomic) NSArray *actionButtons;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *informativeText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 imageSet:(id)a1;

@end
