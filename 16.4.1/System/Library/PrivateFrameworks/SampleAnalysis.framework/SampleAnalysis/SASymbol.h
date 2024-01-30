@class NSString, NSMutableArray;

@interface SASymbol : NSObject {
    unsigned long long _offsetIntoSegment;
    unsigned long long _length;
    NSString *_name;
    NSMutableArray *_sourceInfos;
}

@property (readonly) unsigned long long offsetIntoSegment;
@property (readonly) unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offsetIntoTextSegment;

- (id)debugDescription;
- (void).cxx_destruct;

@end
