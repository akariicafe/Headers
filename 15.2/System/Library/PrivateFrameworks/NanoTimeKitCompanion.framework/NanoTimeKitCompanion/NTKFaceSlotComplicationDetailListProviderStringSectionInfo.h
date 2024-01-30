@class NSString;

@interface NTKFaceSlotComplicationDetailListProviderStringSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *ntk_identifier;
@property (readonly, copy, nonatomic) NSString *ntk_localizedSectionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroupName:(id)a0;

@end
