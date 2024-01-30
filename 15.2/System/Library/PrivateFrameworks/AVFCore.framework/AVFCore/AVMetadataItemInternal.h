@class NSString, NSDictionary, NSDate, NSLocale;
@protocol NSObject, NSCopying;

@interface AVMetadataItemInternal : NSObject {
    struct OpaqueFigMetadataReader { } *reader;
    long long itemIndex;
    NSString *identifier;
    NSString *keySpace;
    id<NSObject, NSCopying> key;
    NSString *commonKey;
    NSLocale *locale;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    id<NSObject, NSCopying> value;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
    NSDate *startDate;
    NSDate *discoveryTimestamp;
    NSString *dataType;
    NSDictionary *extras;
}

@end
