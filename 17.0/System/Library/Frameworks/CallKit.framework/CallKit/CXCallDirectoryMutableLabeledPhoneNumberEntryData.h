@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying>

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;
@property (retain, nonatomic) NSMutableData *mutableLabelData;
@property (retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)appendPhoneNumber:(long long)a0 label:(id)a1;

@end
