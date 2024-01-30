@class NSString;

@interface CRKRepeatedCharacterTableEntry : NSObject <CRKTableEntry> {
    char mCharacter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCharacter:(char)a0;
- (id)rawStringValue;
- (id)stringValueWithLength:(unsigned long long)a0;

@end
