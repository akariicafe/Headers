@class NSString, NSArray;

@interface RBSXPCCodingArray : NSObject <NSFastEnumeration, RBSXPCCoding> {
    NSArray *_array;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
