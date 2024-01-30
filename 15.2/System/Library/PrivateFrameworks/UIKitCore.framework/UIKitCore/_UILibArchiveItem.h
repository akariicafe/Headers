@interface _UILibArchiveItem : _UIArchiveItem

@property (readonly) struct ui_archive_entry { } *underlyingArchiveEntry;
@property (readonly) struct ui_archive { } *underlyingArchive;

+ (id)itemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry { } *)a0 archive:(struct ui_archive { } *)a1;

@end
