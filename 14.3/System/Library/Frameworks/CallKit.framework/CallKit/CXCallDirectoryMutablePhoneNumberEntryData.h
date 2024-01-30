@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying>

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)appendPhoneNumber:(long long)a0;

@end
