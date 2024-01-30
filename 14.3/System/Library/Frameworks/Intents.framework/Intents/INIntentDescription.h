@class NSString, NSDictionary;

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying> {
    NSDictionary *_slotsByName;
    NSDictionary *_alternativeSlotNames;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *responseName;
@property (readonly, nonatomic) Class facadeClass;
@property (readonly, nonatomic) Class dataClass;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) SEL handleSelector;
@property (readonly, nonatomic) SEL confirmSelector;
@property (readonly, copy, nonatomic) NSDictionary *slotsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)slotByName:(id)a0;
- (id)initWithName:(id)a0 responseName:(id)a1 facadeClass:(Class)a2 dataClass:(Class)a3 type:(id)a4 isPrivate:(BOOL)a5 handleSelector:(SEL)a6 confirmSelector:(SEL)a7 slotsByName:(id)a8;
- (id)slotDescriptions;
- (BOOL)isEqual:(id)a0;

@end
