@class NSString;

@interface ABVCardDateScanner : NSObject {
    NSString *_string;
}

@property (readonly) unsigned long long position;

+ (id)scannerWithString:(id)a0;

- (unsigned short)nextCharacter;
- (unsigned long long)lengthOfCalendarUnit:(unsigned long long)a0;
- (long long)scanComponentValueOfLength:(unsigned long long)a0;
- (long long)scanCalendarUnit:(unsigned long long)a0;
- (BOOL)scanLeapMarker;
- (id)initWithString:(id)a0;
- (BOOL)isAtEnd;

@end
