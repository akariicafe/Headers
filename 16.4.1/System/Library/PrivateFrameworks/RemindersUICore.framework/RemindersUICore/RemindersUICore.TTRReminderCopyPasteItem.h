@class NSArray;

@interface RemindersUICore.TTRReminderCopyPasteItem : NSObject <NSSecureCoding, NSItemProviderWriting, NSItemProviderReading> {
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ storages;
    void /* unknown type, empty encoding */ titles;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, nonatomic, readonly) NSArray *readableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
