@class NSArray, NSString, NSLocale;

@interface TITypingSessionAligned : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *alignedEntries;
@property (retain, nonatomic) NSString *alignedText;
@property (retain, nonatomic) NSString *highConfAlignedSubSegment;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL containsCPEntries;
@property (nonatomic) unsigned long long firstCPEntryIndex;
@property (readonly, nonatomic) NSArray *layouts;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)alignedEntryForWord:(id)a0;
+ (id)alignedPathTouchesForWord:(id)a0;

- (id)initWithSession:(id)a0;
- (BOOL)compareForConfidenceContextA:(id)a0 contextB:(id)a1;
- (void).cxx_destruct;
- (id)alignedWordsFromSession:(id)a0;
- (id)textToAppendForEntry:(id)a0 sessionIndx:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)restrictedAlignedSessionWithWordLimit:(unsigned long long)a0;
- (void)getAlignedTextAndConfidence;
- (void)encodeWithCoder:(id)a0;

@end
